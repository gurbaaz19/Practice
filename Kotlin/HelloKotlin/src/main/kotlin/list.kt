fun main() {
    val interestingThings = listOf("Kotlin", "Comics", "Laptops")

    for (Elements in interestingThings){
        println(Elements)
    }

    interestingThings.forEach  {
        println(it)
    }

    interestingThings.forEachIndexed  { index, interestingThing ->
        println("$interestingThing is at index $index")
    }
}