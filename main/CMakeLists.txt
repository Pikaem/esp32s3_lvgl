
# SET(UI_SOURCES 
#     ui/screens/ui_Screen1.c
#     ui/ui.c
#     ui/components/ui_comp_hook.c
#     ui/ui_helpers.c
#     ui/function/function.c
# )

# file(GLOB_RECURSE UI_SOURCES components/*.c fonts/*.c images/*.c screens/*.c)
file(GLOB_RECURSE UI_SOURCES ./ui/*.c)

idf_component_register(SRCS "main.c" "img_test.c" ${UI_SOURCES}
                    INCLUDE_DIRS ".")
