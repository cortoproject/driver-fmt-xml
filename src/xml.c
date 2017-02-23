/* $CORTO_GENERATED
 *
 * xml.c
 *
 * Only code written between the begin and end tags will be preserved
 * when the file is regenerated.
 */

#include <corto/fmt/xml/xml.h>

int xmlMain(int argc, char *argv[]) {
/* $begin(main) */
    CORTO_UNUSED(argc);
    CORTO_UNUSED(argv);
    corto_loaderRegister("xml", corto_deserXml, NULL);
    return 0;
/* $end */
}
