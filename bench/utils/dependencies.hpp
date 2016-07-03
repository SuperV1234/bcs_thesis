// Copyright (c) 2015-2016 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: http://opensource.org/licenses/AFL-3.0
// http://vittorioromeo.info | vittorio.romeo@outlook.com

#pragma once

#include <random>
#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <ecst.hpp>

namespace example
{
    // Type aliases.
    using ft = float;
    using vrm::core::sz_t;

    // SFML type aliases.
    using sfc = sf::Color;
    using vec2f = sf::Vector2f;
    using vec2i = sf::Vector2i;
    using vec2u = sf::Vector2u;

    // Running?
    bool _running = true;


    using hrc = std::chrono::high_resolution_clock;
    using tp = std::chrono::time_point<hrc>;
    using dur = std::chrono::milliseconds;

    tp _last_tp = hrc::now();

    inline void bench()
    {
        auto x = hrc::now() - _last_tp;
        _last_tp = hrc::now();
        std::cout << std::chrono::duration_cast<dur>(x).count() << std::endl;
    }
}



#include "../boilerplate.hpp"
#include "./trig.hpp"
#include "./pres_utils.hpp"
