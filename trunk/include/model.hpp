#ifndef MODEL_HPP
#define MODEL_HPP

namespace sk
{

class Configuration;
class State;

/**
 * @brief The Model class represents simulated object with its inner state.
 */
class Model
{
public:
  Model( const Configuration& configuration );
  ~Model() = default;
  Model( const Model& m ) = default;
  Model( Model&& m ) = default;
  Model& operator=( const Model& m ) = default;
  Model& operator=( Model&& m ) = default;

  /**
   * @brief Performs simulation of model.
   * @param task This is the task from Control.
   * @param dt Time step for integration.
   * @return New current state of Model.
   */
  virtual const State& simulate( const State& task
                               , double dt
                               ) = 0;

};

}
#endif//MODEL_HPP
