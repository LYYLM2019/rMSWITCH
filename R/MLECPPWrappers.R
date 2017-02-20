EM.MSIA.AR <- function (theta, y, y.lagged,
                        z.dependent, z.independent, 
                        maxit, epsilon, 
                        transition.probs.min, transition.probs.max,
                        sigma.min)
{
  
  EMcppARMSIA(y, y.lagged, z.dependent, z.independent,
              theta$beta, theta$mu, theta$sigma,
              theta$gamma.dependent, theta$gamma.independent,
              theta$transition.probs, theta$initial.dist,
              maxit, epsilon,
              transition.probs.min, transition.probs.max,
              sigma.min)
}

EM.MSIAH.AR <- function (theta, y, y.lagged,
                         z.dependent, z.independent, 
                         maxit, epsilon, 
                         transition.probs.min, transition.probs.max,
                         sigma.min)
{
  
  EMcppARMSIAH(y, y.lagged, z.dependent, z.independent,
               theta$beta, theta$mu, theta$sigma,
               theta$gamma.dependent, theta$gamma.independent,
               theta$transition.probs, theta$initial.dist,
               maxit, epsilon,
               transition.probs.min, transition.probs.max,
               sigma.min)
}

EM.MSI.AR <- function (theta, y, y.lagged,
                       z.dependent, z.independent, 
                       maxit, epsilon, 
                       transition.probs.min, transition.probs.max,
                       sigma.min)
{
  
  EMcppARMSI(y, y.lagged, z.dependent, z.independent,
             theta$beta, theta$mu, theta$sigma,
             theta$gamma.dependent, theta$gamma.independent,
             theta$transition.probs, theta$initial.dist,
             maxit, epsilon,
             transition.probs.min, transition.probs.max,
             sigma.min)
}


EM.MSIH.AR <- function (theta, y, y.lagged,
                        z.dependent, z.independent, 
                        maxit, epsilon, 
                        transition.probs.min, transition.probs.max,
                        sigma.min)
{
  
  EMcppARMSIH(y, y.lagged, z.dependent, z.independent,
              theta$beta, theta$mu, theta$sigma,
              theta$gamma.dependent, theta$gamma.independent,
              theta$transition.probs, theta$initial.dist,
              maxit, epsilon,
              transition.probs.min, transition.probs.max,
              sigma.min)
}