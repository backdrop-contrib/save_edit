# Save & Edit
<!--
The first paragraph of this file should be kept short as it will be used as the
project summary on BackdropCMS.org. Aim for about 240 characters (three lines at
80 characters each).

All lines in this file should be no more than 80 characters long for legibility,
unless including a URL or example that requires the line to not wrap.
|<- - - - - - - This line is exactly 80 characters for reference - - - - - - ->|

Detail in READMEs should be limited to the minimum required for installation and
getting started. More detailed documentation should be moved to a GitHub wiki
page; for example: https://github.com/backdrop-contrib/setup/wiki/Documentation.
-->
Save & Edit provides a very simple, yet welcome function to node editing pages.
It adds a button titled "Save & Edit" on selected node types which redirects
back to the edit form rather than returning to the node or admin page.

As simple as the module is, it provides a very much needed feature to core page
editing. When creating long, complex nodes where you want to save the node
regularly to avoid losing changes/edits, it takes an additional click to get
back to the edit form to continue; this module keeps you on the edit page.

### Features
- Creates a "Save & Edit" button on node pages.
- Allows you to choose what node types to use the feature on.
- Allows you to customize the text for "Save & Edit", "Save & Publish", AND the
default Backdrop node "Save" button to whatever you like.
- Allows you to choose to use the Auto-Unpublish feature, which will mark nodes
as unpublished when you use the Save & Edit button. This can either be turned
off, used on ALL nodes/clicks of the Save & Edit button, or can also be only
used on NEW nodes.
- For ANY unpublished nodes, a new "Publish" button will allow you to quickly
Save & Publish a node that was previously marked unpublished. This feature will
be hidden on published nodes, and new nodes with the "Published" option checked
by default.
- Allows to hide each of the default "Save", "Preview" and "Delete" buttons

## Installation
<!--
List the steps needed to install and configure the module. Add/remove steps as
necessary.
-->
- Install this module using the official Backdrop CMS instructions at
  https://docs.backdropcms.org/documentation/extend-with-modules.
- Navigate to Admin > Configuration > Content authoring > Save & Edit Settings
(`admin/config/content/save-edit`) to adjust the settings and to enable for
each content type.
- Configure permissions.

## Issues
<!--
Link to the repo's issue queue.
-->
Bugs and Feature Requests should be reported in the Issue Queue:
https://github.com/backdrop-contrib/save_edit/issues.

## Current Maintainers
<!--
List the current maintainer(s) of the module, and note if this module needs
new/additional maintainers.
-->
- [Martin Price](https://github.com/yorkshire-pudding) -
[System Horizons Ltd](https://www.systemhorizons.co.uk)
- Collaboration and co-maintainers welcome!

## Credits
<!--
Give credit where credit's due.
If this is a Drupal port, state who ported it, and who wrote the original Drupal
module. If this module is based on another project, or uses third-party
libraries, list them here. You can also mention any organisations/companies who
sponsored the module's development.
-->
- Ported to Backdrop CMS by - [Martin Price](https://github.com/yorkshire-pudding) -
[System Horizons Ltd](https://www.systemhorizons.co.uk)
- Port sponsored by [System Horizons Ltd](https://www.systemhorizons.co.uk)
- Written for Drupal by [Jake Strawn](https://github.com/himerus)

## License
<!--
Mention what license this module is released under, and where people can find
it.
-->
This project is GPL v2 software.
See the LICENSE.txt file in this directory for complete text.