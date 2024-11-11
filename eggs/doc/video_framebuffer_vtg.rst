VIDEO_FRAMEBUFFER_VTG
=====================

Register Listing for VIDEO_FRAMEBUFFER_VTG
------------------------------------------

+------------------------------------------------------------------------------+-------------------------------------------------------+
| Register                                                                     | Address                                               |
+==============================================================================+=======================================================+
| :ref:`VIDEO_FRAMEBUFFER_VTG_ENABLE <VIDEO_FRAMEBUFFER_VTG_ENABLE>`           | :ref:`0xf0004800 <VIDEO_FRAMEBUFFER_VTG_ENABLE>`      |
+------------------------------------------------------------------------------+-------------------------------------------------------+
| :ref:`VIDEO_FRAMEBUFFER_VTG_HRES <VIDEO_FRAMEBUFFER_VTG_HRES>`               | :ref:`0xf0004804 <VIDEO_FRAMEBUFFER_VTG_HRES>`        |
+------------------------------------------------------------------------------+-------------------------------------------------------+
| :ref:`VIDEO_FRAMEBUFFER_VTG_HSYNC_START <VIDEO_FRAMEBUFFER_VTG_HSYNC_START>` | :ref:`0xf0004808 <VIDEO_FRAMEBUFFER_VTG_HSYNC_START>` |
+------------------------------------------------------------------------------+-------------------------------------------------------+
| :ref:`VIDEO_FRAMEBUFFER_VTG_HSYNC_END <VIDEO_FRAMEBUFFER_VTG_HSYNC_END>`     | :ref:`0xf000480c <VIDEO_FRAMEBUFFER_VTG_HSYNC_END>`   |
+------------------------------------------------------------------------------+-------------------------------------------------------+
| :ref:`VIDEO_FRAMEBUFFER_VTG_HSCAN <VIDEO_FRAMEBUFFER_VTG_HSCAN>`             | :ref:`0xf0004810 <VIDEO_FRAMEBUFFER_VTG_HSCAN>`       |
+------------------------------------------------------------------------------+-------------------------------------------------------+
| :ref:`VIDEO_FRAMEBUFFER_VTG_VRES <VIDEO_FRAMEBUFFER_VTG_VRES>`               | :ref:`0xf0004814 <VIDEO_FRAMEBUFFER_VTG_VRES>`        |
+------------------------------------------------------------------------------+-------------------------------------------------------+
| :ref:`VIDEO_FRAMEBUFFER_VTG_VSYNC_START <VIDEO_FRAMEBUFFER_VTG_VSYNC_START>` | :ref:`0xf0004818 <VIDEO_FRAMEBUFFER_VTG_VSYNC_START>` |
+------------------------------------------------------------------------------+-------------------------------------------------------+
| :ref:`VIDEO_FRAMEBUFFER_VTG_VSYNC_END <VIDEO_FRAMEBUFFER_VTG_VSYNC_END>`     | :ref:`0xf000481c <VIDEO_FRAMEBUFFER_VTG_VSYNC_END>`   |
+------------------------------------------------------------------------------+-------------------------------------------------------+
| :ref:`VIDEO_FRAMEBUFFER_VTG_VSCAN <VIDEO_FRAMEBUFFER_VTG_VSCAN>`             | :ref:`0xf0004820 <VIDEO_FRAMEBUFFER_VTG_VSCAN>`       |
+------------------------------------------------------------------------------+-------------------------------------------------------+

VIDEO_FRAMEBUFFER_VTG_ENABLE
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0004800 + 0x0 = 0xf0004800`


    .. wavedrom::
        :caption: VIDEO_FRAMEBUFFER_VTG_ENABLE

        {
            "reg": [
                {"name": "enable", "attr": 'reset: 1', "bits": 1},
                {"bits": 31},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


VIDEO_FRAMEBUFFER_VTG_HRES
^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0004800 + 0x4 = 0xf0004804`


    .. wavedrom::
        :caption: VIDEO_FRAMEBUFFER_VTG_HRES

        {
            "reg": [
                {"name": "hres[11:0]", "attr": 'reset: 800', "bits": 12},
                {"bits": 20},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


VIDEO_FRAMEBUFFER_VTG_HSYNC_START
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0004800 + 0x8 = 0xf0004808`


    .. wavedrom::
        :caption: VIDEO_FRAMEBUFFER_VTG_HSYNC_START

        {
            "reg": [
                {"name": "hsync_start[11:0]", "attr": 'reset: 1010', "bits": 12},
                {"bits": 20},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


VIDEO_FRAMEBUFFER_VTG_HSYNC_END
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0004800 + 0xc = 0xf000480c`


    .. wavedrom::
        :caption: VIDEO_FRAMEBUFFER_VTG_HSYNC_END

        {
            "reg": [
                {"name": "hsync_end[11:0]", "attr": 'reset: 1011', "bits": 12},
                {"bits": 20},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


VIDEO_FRAMEBUFFER_VTG_HSCAN
^^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0004800 + 0x10 = 0xf0004810`


    .. wavedrom::
        :caption: VIDEO_FRAMEBUFFER_VTG_HSCAN

        {
            "reg": [
                {"name": "hscan[11:0]", "attr": 'reset: 1055', "bits": 12},
                {"bits": 20},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


VIDEO_FRAMEBUFFER_VTG_VRES
^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0004800 + 0x14 = 0xf0004814`


    .. wavedrom::
        :caption: VIDEO_FRAMEBUFFER_VTG_VRES

        {
            "reg": [
                {"name": "vres[11:0]", "attr": 'reset: 480', "bits": 12},
                {"bits": 20},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


VIDEO_FRAMEBUFFER_VTG_VSYNC_START
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0004800 + 0x18 = 0xf0004818`


    .. wavedrom::
        :caption: VIDEO_FRAMEBUFFER_VTG_VSYNC_START

        {
            "reg": [
                {"name": "vsync_start[11:0]", "attr": 'reset: 502', "bits": 12},
                {"bits": 20},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


VIDEO_FRAMEBUFFER_VTG_VSYNC_END
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0004800 + 0x1c = 0xf000481c`


    .. wavedrom::
        :caption: VIDEO_FRAMEBUFFER_VTG_VSYNC_END

        {
            "reg": [
                {"name": "vsync_end[11:0]", "attr": 'reset: 503', "bits": 12},
                {"bits": 20},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


VIDEO_FRAMEBUFFER_VTG_VSCAN
^^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0004800 + 0x20 = 0xf0004820`


    .. wavedrom::
        :caption: VIDEO_FRAMEBUFFER_VTG_VSCAN

        {
            "reg": [
                {"name": "vscan[11:0]", "attr": 'reset: 524', "bits": 12},
                {"bits": 20},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


