class Person(_firstName: String, _lastName: String) {
    val firstName: String
    val lastName: String

    init{
        firstName= _firstName
        lastName= _lastName
    }

    var nickName: String? = null
        set(value){
            field= value
        println("The new nickname is $value")
    }

    fun printInfo() {
        val nikNameToPrint = nickName ?: "No Nickname"
        println("$firstName ($nikNameToPrint) $lastName")
    }
}

