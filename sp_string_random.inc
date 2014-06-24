[
define sp_string_random(length::integer=20) => {
    // Returns a string of random alphanumeric characters.
    local(alphanumeric) = 'abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    local(s) = string
    loop(integer(#length))
        #s->append(#alphanumeric->get(integer(math_random(-lower=1, -upper=62))))
    /loop
    return(#s)
}
]
