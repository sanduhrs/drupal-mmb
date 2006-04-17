Mobile Media Blog - mmb.module
------------------------------

Mobile Media Blog allows you to post media via e-mail or mobile phone.
This module is alpha and inadequately tested, don't use it in a production environment.

Please, send bug reports, feature requests, or other comments to me:
Stefan Auditor <sanduhrs@audiens.de>

/* Depends */
- Drupal4.7RC3 http://drupal.org
- image.module http://drupal.org/project/image
- mailhandler.module http://drupal.org/project/mailhandler
  (patched for 4.7 as seen on http://drupal.org/node/45590)

/* Install */
- Copy this directory to your modules/ directory
- Enable the module at: administer -> modules
- Now you should be able to post media via E-Mail

/* Todo */
- extend media (video, audio, images)
- allow to choose which attachment (number) to process
- process multiple attachments

/* Credits */
Based on the modification of mailhandler.module for Drupal4.6 as seen on http://www.stuartandnicola.com/node/339 code by Stuart Greenfield www.stuartandnicola.com

/* Changelog */
17.04.2006: alpha release