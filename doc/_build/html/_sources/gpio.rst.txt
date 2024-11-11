GPIO
====

Register Listing for GPIO
-------------------------

+----------------------------+------------------------------+
| Register                   | Address                      |
+============================+==============================+
| :ref:`GPIO_IN <GPIO_IN>`   | :ref:`0xf0000800 <GPIO_IN>`  |
+----------------------------+------------------------------+
| :ref:`GPIO_OUT <GPIO_OUT>` | :ref:`0xf0000804 <GPIO_OUT>` |
+----------------------------+------------------------------+

GPIO_IN
^^^^^^^

`Address: 0xf0000800 + 0x0 = 0xf0000800`

    GPIO Input(s) Status.

    .. wavedrom::
        :caption: GPIO_IN

        {
            "reg": [
                {"name": "in", "bits": 1},
                {"bits": 31},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


GPIO_OUT
^^^^^^^^

`Address: 0xf0000800 + 0x4 = 0xf0000804`

    GPIO Output(s) Control.

    .. wavedrom::
        :caption: GPIO_OUT

        {
            "reg": [
                {"name": "out[1:0]", "bits": 2},
                {"bits": 30},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


