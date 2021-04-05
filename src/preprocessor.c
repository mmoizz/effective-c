// Chapter 9

int main()
{
    // The preprocessor runs before source code is translated into object code
    // The following are examples of preprocessing directives:
    // #define
    // #include
    // #if
    // Output of these transformations is called a translation unit

    // #include <foo> inserts the contents of a file into a translation unit
    // Quoted includes first search in local include paths,
    // and angle bracket includes first search in system include paths 

    // Preprocessor directives can also be used to implement
    // conditional inclusion
    // For example, if a flag is set (e.g. #ifdef _WIN32), you can choose to
    // include or exclude a segment of code

    // If an error presents in preprocessing itself,
    // you can signal an error using compile_error[]
    // or #error {message}

    // Headers can conceivably be included several times in the same
    // translation unit, resulting in duplicate definitions
    // We can prevent this from happening using a header guard:
    // #ifndef FOO_H
    // #define FOO_H
    // #endif /* FOO_H */

    // Above, the #define directive creates a "macro",
    // which includes an identifier and an optional replacement list
    // During preprocessing, the replacement list will be substituted
    // for instances of the identifier
    // In the case of function-like macros, parentheses must immediately
    // follow the identifier, sans whitespace, e.g. #define FOO(x)
    // Multiple lines of a macro can be joined using the '\' character
    // To redefine a macro, it must first be undefined, e.g. #undef FOO
    // Elements prefaced with '#' will be stringified

    // The compiler/implementation may come with
    // some predefined macros
}
