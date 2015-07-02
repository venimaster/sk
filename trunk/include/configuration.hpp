#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP

namespace sk
{
  /**
 * @brief The Configuration class represents all parameters of simulated object
 * Model should know about.
 */
class Configuration
{
public:
  Configuration();
  ~Configuration() = default;
  Configuration( const Configuration& c ) = default;
  Configuration( Configuration&& c ) = default;
  Configuration& operator=( const Configuration& c ) = default;
  Configuration& operator=( Configuration&& c ) = default;
};

}
#endif//CONFIGURATION_HPP
