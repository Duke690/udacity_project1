#include <gazebo/gazebo.hh>
#include <iostream>

namespace gazebo {

class HelloMessagePlugin : public WorldPlugin
{
 public:
  HelloMessagePlugin() : WorldPlugin()
  {
    std::cout << "Welcome to my world" << std::endl;
  }

 public:
  void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
  {
  }
};
GZ_REGISTER_WORLD_PLUGIN(HelloMessagePlugin)

}  // namespace gazebo
