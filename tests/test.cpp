// Copyright 2020 Your Name <your_email>

#include <gtest/gtest.h>

#include <cache_exploration.hpp>

TEST(Example, EmptyTest) {
  cache_exploration cache;
  cache.direct_travel();
  std::cout << cache;
  cache.reverse_travel();
  std::cout << cache;
  cache.random_travel();
  std::cout << cache;
  EXPECT_TRUE(true);
}