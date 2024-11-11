VIDEO_FRAMEBUFFER
=================

Register Listing for VIDEO_FRAMEBUFFER
--------------------------------------

+--------------------------------------------------------------------+--------------------------------------------------+
| Register                                                           | Address                                          |
+====================================================================+==================================================+
| :ref:`VIDEO_FRAMEBUFFER_DMA_BASE <VIDEO_FRAMEBUFFER_DMA_BASE>`     | :ref:`0xf0004000 <VIDEO_FRAMEBUFFER_DMA_BASE>`   |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`VIDEO_FRAMEBUFFER_DMA_LENGTH <VIDEO_FRAMEBUFFER_DMA_LENGTH>` | :ref:`0xf0004004 <VIDEO_FRAMEBUFFER_DMA_LENGTH>` |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`VIDEO_FRAMEBUFFER_DMA_ENABLE <VIDEO_FRAMEBUFFER_DMA_ENABLE>` | :ref:`0xf0004008 <VIDEO_FRAMEBUFFER_DMA_ENABLE>` |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`VIDEO_FRAMEBUFFER_DMA_DONE <VIDEO_FRAMEBUFFER_DMA_DONE>`     | :ref:`0xf000400c <VIDEO_FRAMEBUFFER_DMA_DONE>`   |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`VIDEO_FRAMEBUFFER_DMA_LOOP <VIDEO_FRAMEBUFFER_DMA_LOOP>`     | :ref:`0xf0004010 <VIDEO_FRAMEBUFFER_DMA_LOOP>`   |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`VIDEO_FRAMEBUFFER_DMA_OFFSET <VIDEO_FRAMEBUFFER_DMA_OFFSET>` | :ref:`0xf0004014 <VIDEO_FRAMEBUFFER_DMA_OFFSET>` |
+--------------------------------------------------------------------+--------------------------------------------------+

VIDEO_FRAMEBUFFER_DMA_BASE
^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0004000 + 0x0 = 0xf0004000`


    .. wavedrom::
        :caption: VIDEO_FRAMEBUFFER_DMA_BASE

        {
            "reg": [
                {"name": "dma_base[31:0]", "attr": 'reset: 1086324736', "bits": 32}
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


VIDEO_FRAMEBUFFER_DMA_LENGTH
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0004000 + 0x4 = 0xf0004004`


    .. wavedrom::
        :caption: VIDEO_FRAMEBUFFER_DMA_LENGTH

        {
            "reg": [
                {"name": "dma_length[31:0]", "attr": 'reset: 1536000', "bits": 32}
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


VIDEO_FRAMEBUFFER_DMA_ENABLE
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0004000 + 0x8 = 0xf0004008`


    .. wavedrom::
        :caption: VIDEO_FRAMEBUFFER_DMA_ENABLE

        {
            "reg": [
                {"name": "dma_enable", "bits": 1},
                {"bits": 31},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


VIDEO_FRAMEBUFFER_DMA_DONE
^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0004000 + 0xc = 0xf000400c`


    .. wavedrom::
        :caption: VIDEO_FRAMEBUFFER_DMA_DONE

        {
            "reg": [
                {"name": "dma_done", "bits": 1},
                {"bits": 31},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


VIDEO_FRAMEBUFFER_DMA_LOOP
^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0004000 + 0x10 = 0xf0004010`


    .. wavedrom::
        :caption: VIDEO_FRAMEBUFFER_DMA_LOOP

        {
            "reg": [
                {"name": "dma_loop", "attr": 'reset: 1', "bits": 1},
                {"bits": 31},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


VIDEO_FRAMEBUFFER_DMA_OFFSET
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0004000 + 0x14 = 0xf0004014`


    .. wavedrom::
        :caption: VIDEO_FRAMEBUFFER_DMA_OFFSET

        {
            "reg": [
                {"name": "dma_offset[31:0]", "bits": 32}
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


