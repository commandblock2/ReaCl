#ifndef ALIAS
#define ALIAS

#include <memory>
#include <functional>
#include <box2d/box2d.h>

namespace _details
{
    template <typename b2_type>
    using b2_pointer = std::unique_ptr<b2_type, std::function<void(b2_type*)>>;
}

using body_ptr = _details::b2_pointer<b2Body>;
using fixure_ptr = _details::b2_pointer<b2Fixture>;

#endif
