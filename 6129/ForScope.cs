using System;
namespace ForScope {

    class ForScopeBlock {
        
        static void Main() {

            for (int i = 0; i < 5; i++) {
                Console.Writeline("Scope of for block i is visible here and its value is " + i);
            }

            Console.Writeline("Error occurs because i is no longer in scope " + i);
        }

    }

}