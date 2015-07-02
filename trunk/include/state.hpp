#ifndef STATE_HPP
#define STATE_HPP

namespace sk
{
/**
 * @brief The State class, representing inner state of simulated object.
 */
class State
{
public:
  State();
  ~State() = default;
  State( const State& s ) = default;
  State( State&& s ) = default;
  State& operator=( const State& s ) = default;
  State& operator=( State&& s ) = default;
};

}
#endif//STATE_HPP
