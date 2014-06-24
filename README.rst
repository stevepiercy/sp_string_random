sp_string_random - Lasso 9 method returns a string of random alphanumeric characters
####################################################################################

Description
===========

``[sp_string_random]`` is a Lasso 9 method that returns a string of random
alphanumeric characters. It accepts an optional integer parameter representing
the length of the string to be returned. By default, twenty characters are
returned.

Usage
=====

.. code-block:: lasso

    sp_string_random
    '<br />'
    sp_string_random(30)

.. code-block:: text

    =>
    l3ge2kgkMwG8TaHyitdj
    wX5gpPH68nQY80CsC2qs6BnWATC7hJ

Installation
============

Install the file ``sp_string_random.inc`` where you think is best. Place it
either in your Lasso Server's or Site's ``LassoStartup`` or ``LassoLibraries``
directory, restarting the appropriate scope as needed, or include it in the
page that calls the methods. I recommend Lasso Site ``LassoStartup``.
