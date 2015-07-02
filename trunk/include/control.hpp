#ifndef CONTROL_HPP
#define CONTROL_HPP

namespace sk
{

class State;
/**
 * @brief The Control class calculates preferred state of simulated object,
 * specified by its configuration for the given task based on its current state.
 */
template <typename Config>
class Control
{
public:
  Control();
  ~Control() = default;
  Control( const Control& c ) = default;
  Control( Control&& c ) = default;
  Control& operator=( const Control& c ) = default;
  Control& operator=( Control&& c ) = default;

  /**
   * @brief setTask Sets task to be performed by Control.
   * @param task Task to perform. It is represented as State of simulated object
   * we have to achieve.
   */
  virtual void setTask( const State& task ) = 0;

  /**
   * @brief control Calculates preferred state of simulated object in order to
   * achive Control's task
   * @param currentState Current State of simulated object.
   * @param dt Time step for integration.
   * @return New State simulated object should achieve in order to perform task.
   */
  virtual State control( const State& currentState
                       , double dt
                       ) = 0;
};

}
#endif//CONTROL_HPP
