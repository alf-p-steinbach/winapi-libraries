#pragma once

#include <cppx-core-language/all.hpp>
#include <winapi-header-wrappers/commctrl-h.hpp>

namespace winapi::library::common_controls {
    struct Usage
    {
        Usage()
        {
            INITCOMMONCONTROLSEX params = { sizeof( params ) };

            params.dwICC = ICC_STANDARD_CLASSES | ICC_WIN95_CLASSES;
            InitCommonControlsEx( &params )
                or $fail( "InitCommonControlsEx failed" );
        }
    };
}  // namespace winapi::library::common_controls
