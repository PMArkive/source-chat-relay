#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <opus.h>
#include <stdio.h>

//------------------------------------------------------------
//-----------       Created with 010 Editor        -----------
//------         www.sweetscape.com/010editor/          ------
//
// File    : C:\Users\xxlos\Downloads\data\voice_154341135_00.bin
// Address : 14 (0xE)
// Size    : 652 (0x28C)
//------------------------------------------------------------
unsigned char hexData[652] = {
    0x3E, 0x00, 0x00, 0x00, 0x68, 0x00, 0xCB, 0x05, 0xFE, 0xA0, 0xDB, 0x4E, 0x52, 0x2B, 0xE5, 0xD2,
    0xB4, 0x8A, 0x6B, 0xAB, 0x34, 0x01, 0xFF, 0xD1, 0xB0, 0xD0, 0x2D, 0x37, 0xE7, 0xB8, 0x2B, 0x34,
    0x65, 0x3C, 0x0D, 0x42, 0xC1, 0x44, 0x55, 0x49, 0x47, 0x9D, 0xA1, 0x42, 0xE2, 0x8C, 0xE1, 0xAF,
    0x12, 0x68, 0x4D, 0x5A, 0x0D, 0x6B, 0x43, 0x33, 0xAF, 0x50, 0x10, 0x11, 0x96, 0x02, 0x74, 0xA3,
    0x70, 0xBC, 0x44, 0x00, 0x01, 0x00, 0x68, 0x0F, 0x11, 0x0E, 0xAF, 0x75, 0x2E, 0x35, 0xC7, 0x40,
    0xB1, 0x22, 0x52, 0x39, 0xC2, 0x26, 0x54, 0x3D, 0x6B, 0x30, 0xA3, 0x40, 0x92, 0x2E, 0x90, 0x67,
    0xEF, 0xA9, 0x52, 0xE0, 0xCA, 0xDA, 0x1D, 0x45, 0x4E, 0x08, 0xEB, 0xC9, 0xD9, 0xAC, 0x03, 0x5E,
    0xDF, 0xA5, 0xB6, 0x8E, 0xD9, 0x63, 0x43, 0x30, 0xDE, 0x36, 0xB6, 0x56, 0x5D, 0xC1, 0x9D, 0xDB,
    0x4F, 0xB9, 0x37, 0xDF, 0x00, 0x64, 0xCE, 0xF5, 0xC0, 0x42, 0x40, 0x00, 0x02, 0x00, 0x68, 0x0F,
    0x66, 0x29, 0xE9, 0x2E, 0x2E, 0x43, 0x7E, 0x55, 0x86, 0xA0, 0xC6, 0x54, 0x82, 0x8F, 0x92, 0x7C,
    0x14, 0x30, 0x18, 0x94, 0x89, 0xF0, 0xDF, 0xF4, 0x9C, 0x50, 0x98, 0x0E, 0xDA, 0xC8, 0x11, 0x33,
    0xEF, 0x43, 0x58, 0xDE, 0xAE, 0xE1, 0xE2, 0xD4, 0x44, 0x3A, 0x5D, 0xE6, 0x2E, 0x5E, 0xC9, 0x73,
    0x11, 0x54, 0xE3, 0xB9, 0x61, 0x07, 0xD8, 0x82, 0x8E, 0xD3, 0xA9, 0x96, 0x8D, 0x85, 0x59, 0x00,
    0x03, 0x00, 0x68, 0x80, 0xB8, 0x6B, 0x0E, 0x0E, 0xC9, 0xD1, 0x62, 0x28, 0x7E, 0xD1, 0x48, 0x0C,
    0x75, 0xE0, 0x67, 0x79, 0x53, 0x6A, 0x8C, 0xC9, 0x7B, 0x02, 0xAD, 0x24, 0x26, 0xA1, 0x38, 0x2B,
    0x90, 0x50, 0x2E, 0xA8, 0x91, 0x6D, 0xA4, 0xE3, 0x21, 0x51, 0x08, 0x92, 0x2E, 0xD6, 0x82, 0xD3,
    0x17, 0xC8, 0x45, 0xDE, 0x9D, 0xE7, 0x45, 0xC3, 0x8E, 0xBF, 0xB7, 0xE4, 0x17, 0x2F, 0x52, 0xB6,
    0x06, 0x05, 0xF8, 0x9A, 0x42, 0x74, 0xF0, 0x41, 0x0D, 0xEA, 0x9B, 0x5D, 0x4E, 0x3E, 0x3F, 0xAB,
    0xE0, 0xE0, 0x15, 0xEC, 0xAC, 0x5A, 0x3D, 0xF6, 0xBD, 0xBD, 0x03, 0x49, 0x00, 0x04, 0x00, 0x68,
    0x1B, 0x84, 0xC7, 0x93, 0x2E, 0x08, 0xD7, 0x14, 0xF1, 0x9F, 0x66, 0x3C, 0xFF, 0x30, 0x98, 0x61,
    0x08, 0xC9, 0x60, 0xFD, 0x82, 0xE5, 0x92, 0x9E, 0x48, 0x12, 0x35, 0x13, 0xEC, 0x97, 0x05, 0xF4,
    0xE6, 0x1C, 0x73, 0x90, 0x98, 0x80, 0x27, 0x65, 0x35, 0xA3, 0xD4, 0x1A, 0x1F, 0xAA, 0x4A, 0xCA,
    0x68, 0x03, 0xE8, 0x34, 0xE8, 0x7F, 0x9A, 0xA7, 0xB8, 0x9B, 0x5A, 0xE0, 0xCB, 0x39, 0x76, 0x49,
    0x0F, 0xED, 0xB2, 0xBA, 0xC8, 0x92, 0x77, 0xDA, 0x57, 0x00, 0x05, 0x00, 0x68, 0x86, 0xD7, 0xB5,
    0x37, 0x9D, 0x15, 0x9F, 0xA0, 0xB6, 0x98, 0x3D, 0xB1, 0xF8, 0x6B, 0xF4, 0xC3, 0xB3, 0x65, 0xC8,
    0x47, 0x9F, 0x46, 0x5A, 0x64, 0xDF, 0x65, 0x5B, 0xDA, 0x9C, 0x40, 0x85, 0x5D, 0x6C, 0xD9, 0x9B,
    0x32, 0x2F, 0x95, 0x5E, 0x96, 0x69, 0xE5, 0xE4, 0x28, 0x04, 0xFD, 0xBA, 0x14, 0xB7, 0x37, 0x37,
    0x3D, 0xCA, 0x51, 0x44, 0x4E, 0xE4, 0x53, 0xD9, 0xB9, 0x76, 0x7B, 0xD1, 0x47, 0x01, 0xD8, 0xFE,
    0xD7, 0x09, 0x44, 0x2B, 0xF6, 0x8B, 0x02, 0xA8, 0x7F, 0x31, 0x17, 0xB6, 0x46, 0xB0, 0x62, 0x6E,
    0x92, 0x09, 0xE3, 0x5B, 0x00, 0x06, 0x00, 0x68, 0x80, 0xB5, 0xF9, 0xFF, 0x24, 0xB9, 0xF1, 0x44,
    0x59, 0xF5, 0x2C, 0xE9, 0x35, 0x99, 0xB8, 0x6E, 0x74, 0x44, 0x60, 0x5B, 0xA5, 0x0D, 0xFD, 0xD9,
    0x8E, 0x48, 0xBC, 0x8A, 0xAA, 0x2C, 0x86, 0xAD, 0xEC, 0xD9, 0x1F, 0xFC, 0xAA, 0xF5, 0xFA, 0x22,
    0x3D, 0x5C, 0x62, 0xD9, 0x77, 0x95, 0xE2, 0x04, 0xDF, 0x4C, 0xDA, 0xD2, 0x27, 0xF6, 0xD7, 0xA6,
    0xB9, 0x93, 0xBE, 0x8E, 0x00, 0x53, 0x8C, 0xD3, 0xC0, 0x8E, 0x4A, 0x0E, 0x49, 0xB8, 0x8C, 0xF2,
    0x09, 0x19, 0x5D, 0x76, 0x38, 0x89, 0x57, 0x53, 0xA6, 0xE6, 0x6B, 0x92, 0x8A, 0x2C, 0xAA, 0xE0,
    0x25, 0x63, 0x56, 0x00, 0x07, 0x00, 0x68, 0x80, 0xB0, 0xAC, 0x23, 0xD6, 0x8C, 0x70, 0x02, 0x8E,
    0xD1, 0x15, 0x21, 0x43, 0x13, 0x59, 0xB6, 0x9A, 0x01, 0x88, 0x07, 0x47, 0x82, 0xCD, 0x4E, 0x93,
    0x4A, 0x43, 0x1B, 0x1A, 0x36, 0xC9, 0xD4, 0x8E, 0x64, 0x26, 0xC3, 0x45, 0x51, 0x2E, 0x6A, 0x41,
    0x57, 0x52, 0xA5, 0x62, 0x71, 0x80, 0xEC, 0xA5, 0xDE, 0xBC, 0x7C, 0x14, 0x88, 0xC4, 0xDF, 0xA0,
    0x1A, 0x64, 0xEA, 0x3F, 0x8C, 0x23, 0x9D, 0x67, 0xC2, 0x69, 0xF4, 0x41, 0x2E, 0xA6, 0xE8, 0xF9,
    0x8D, 0xA8, 0x37, 0x12, 0xEE, 0x0A, 0x94, 0xBA, 0xE1, 0x37, 0x2B, 0x00
};

int main(int argc, char *argv[]) {
    int err;

    OpusDecoder *decoder = opus_decoder_create(24000, 1, &err);

    if (err < 0)
    {
        fprintf(stderr, "failed to create decoder: %s\n", opus_strerror(err));
        return EXIT_FAILURE;
    }

    // opus_decoder_ctl(decoder, OPUS_SET_BITRATE(32000));
    // opus_decoder_ctl(decoder, OPUS_SET_SIGNAL(0xBB9));
    // opus_decoder_ctl(decoder, OPUS_SET_DTX(1));

    opus_int16 out[480 * 1 * sizeof(opus_int16)];

    int frame_size = opus_decode(decoder, hexData, 2, out, 480, 0);

    if (frame_size < 0)
    {
        fprintf(stderr, "decoder failed: %s\n", opus_strerror(frame_size));
        return EXIT_FAILURE;
    }

    // FILE *fout = fopen("out_decoded", "w");

    // if (fout == NULL)
    // {
    //     fprintf(stderr, "failed to open output file: %s\n", strerror(errno));
    //     return EXIT_FAILURE;
    // }

    // unsigned char pcm_bytes[6*960*2*2];

    // for(int i=0;i<2*frame_size;i++)
    // {
    //     pcm_bytes[2*i]=out[i]&0xFF;
    //     pcm_bytes[2*i+1]=(out[i]>>8)&0xFF;
    // }

    // fwrite(pcm_bytes, sizeof(short), frame_size * 2, fout);

    opus_decoder_destroy(decoder);
}
