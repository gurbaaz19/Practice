fun sayHello(greeting:String, vararg itemsToGreet:String) {
    itemsToGreet.forEach{ itemToGreet ->
        println("$greeting $itemToGreet")
    }
}

fun main() {
//    val people = listOf("Gurbaaz", "Anhad", "Timmy")
    sayHello("Hey","Gurbaaz", "Anhad")

   val interestingThings = arrayOf("Kotlin", "Comics", "Laptops")
    println(interestingThings.size)
    println(interestingThings[0])
    println(interestingThings.get(0))
}