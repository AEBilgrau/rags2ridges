\name{pooledS}
\alias{pooledS}
\alias{pooledP}
\title{
Compute the pooled covariance or precision matrix estimate
}
\description{
Compute the pooled covariance or precision matrix estimate from a \code{list} of covariance matrices or precision matrices.
}
\usage{
pooledS(Slist, ns, subset = rep(TRUE, length(ns)), mle = TRUE)
pooledP(Plist, ns, subset = rep(TRUE, length(ns)), mle = TRUE)
}
\arguments{
  \item{Slist}{A \code{list} of length \eqn{G} of \code{numeric} covariance
    matrices of the same size.}
  \item{ns}{A \code{numeric} vector for length \eqn{G} giving the sample sizes
    in the corresponding entries of \code{Slist}}
  \item{mle}{\code{logical}. If \code{TRUE}, the (biased) MLE is given. If
    \code{FALSE}, the biased corrected estimate is given. Default is
    \code{TRUE}.}
  \item{subset}{\code{logical} vector of the same length as \code{Slist} giving
    the classes to pool. Default is all classes.}
  \item{Plist}{A \code{list} of length \eqn{G} of invertible \code{numeric}
    precision matrices of the same size.}
}
\details{
When \code{mle} is \code{FALSE} the given covariance/precision matrices is assumed to have been computed using the denominator \code{ns[i] - 1}. Hence, the sum of all \code{ns} minus \eqn{G} is used a the denominator of the pooled estimate.
Conversely, when \code{mle} is \code{TRUE} the total sum of the sample sizes \code{ns} is used as the denominator in the pooled estimate.

The function \code{pooledP} is equivalent to a wrapper for \code{pooledS}.
That is, it inverts all the precision matrices in \code{Plist}, applies
\code{pooledS}, and inverts the resulting matrix.
}
\value{
\code{pooledS} returns the pooled covariance matrix, that is a \code{numeric} matrix with the same size as the elements of \code{Slist}.
Similarly, \code{pooledP} returns the pooled precision matrix, i.e. a \code{numeric} matrix with the same size as the elements of \code{Plist}.
}
\author{
Anders Ellern Bilgrau,
Carel F.W. Peeters <cf.peeters@vumc.nl>,
Wessel N. van Wieringen
}
\examples{
ns <- c(4, 6, 8)
Slist <- createS(ns, p = 6)

pooledS(Slist, ns)
pooledS(Slist, ns, mle = FALSE)

# Pool the first two classes only, leave out the remaning
pooledS(Slist, ns, subset = c(TRUE, TRUE, FALSE))
pooledS(Slist, ns, subset = ns > 5) # Pool studies with sample size > 5

# Pooled precision matrices
ns <- c(7, 8, 9)
Plist <- lapply(createS(ns, p = 6), solve)
pooledS(Plist, ns)
}

