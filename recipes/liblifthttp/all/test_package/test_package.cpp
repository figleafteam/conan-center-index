#include <lift/lift.hpp>
#include <stdio.h>

int main() {
  printf("************* Testing liblifthttp ***************\n");
  lift::client().start_request(
      std::make_unique<lift::request>("https://google.com/"),
      [](auto request_ptr, auto response) {
        std::cout << lift::to_string(response.lift_status()) << "\n";
      });
  printf("OK\n");
  return 0;
}
