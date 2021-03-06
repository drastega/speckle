% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{speckle_generator}
\alias{speckle_generator}
\title{Speckle Generator}
\usage{
speckle_generator(rho, theta, dm, seeing, speckle_sigma, wind)
}
\arguments{
\item{rho}{a separation (an arcsec).}

\item{theta}{a positional angle.}

\item{dm}{a magnitude difference.}

\item{seeing}{a number.}

\item{speckle_sigma}{a number.}

\item{wind}{a wind speed.}
}
\value{
The vector of model speckle image.
}
\description{
Generate model 512 x 512 x 2 (bytes) speckle image of binary star
}
\examples{
speckle_vector <- speckle_generator(rho = 0.5, theta = 70,
dm = 0.3, seeing = 20, speckle_sigma = 1, wind = 0)
speckle_matrix <- matrix(speckle_vector, nrow = 512, ncol = 512)
}
