#ifndef GRAPHIC_HEADER
#define GRAPHIC_HEADER

#include <cstdint>

namespace vkapp
{

class Graphic
{
  public:
    using Error                   = unsigned int;
    const unsigned int   no_error = 0;
    static const uint8_t ERROR_ID = 2;

    virtual void run() = 0;

  protected:
#if defined(ENABLE_LOGGER)
    static std::shared_ptr<spdlog::logger> _logger;
#endif
};

}   // namespace vkapp

#endif