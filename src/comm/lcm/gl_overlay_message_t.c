/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <string.h>
#include "gl_overlay_message_t.h"

static int __gl_overlay_message_t_hash_computed;
static int64_t __gl_overlay_message_t_hash;
 
int64_t __gl_overlay_message_t_hash_recursive(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __gl_overlay_message_t_get_hash)
            return 0;
 
    const __lcm_hash_ptr cp = { p, (void*)__gl_overlay_message_t_get_hash };
    (void) cp;
 
    int64_t hash = 0x8cc23aa1330536b4LL
         + __string_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __int64_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
        ;
 
    return (hash<<1) + ((hash>>63)&1);
}
 
int64_t __gl_overlay_message_t_get_hash(void)
{
    if (!__gl_overlay_message_t_hash_computed) {
        __gl_overlay_message_t_hash = __gl_overlay_message_t_hash_recursive(NULL);
        __gl_overlay_message_t_hash_computed = 1;
    }
 
    return __gl_overlay_message_t_hash;
}
 
int __gl_overlay_message_t_encode_array(void *buf, int offset, int maxlen, const gl_overlay_message_t *p, int elements)
{
    int pos = 0, thislen, element;
 
    for (element = 0; element < elements; element++) {
 
        thislen = __string_encode_array(buf, offset + pos, maxlen - pos, &(p[element].name), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].coordinate_frame_type), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].origin_x), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].origin_y), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].origin_z), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].length), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, p[element].data, p[element].length);
        if (thislen < 0) return thislen; else pos += thislen;
 
    }
    return pos;
}
 
int gl_overlay_message_t_encode(void *buf, int offset, int maxlen, const gl_overlay_message_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __gl_overlay_message_t_get_hash();
 
    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    thislen = __gl_overlay_message_t_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    return pos;
}
 
int __gl_overlay_message_t_encoded_array_size(const gl_overlay_message_t *p, int elements)
{
    int size = 0, element;
    for (element = 0; element < elements; element++) {
 
        size += __string_encoded_array_size(&(p[element].name), 1);
 
        size += __int8_t_encoded_array_size(&(p[element].coordinate_frame_type), 1);
 
        size += __double_encoded_array_size(&(p[element].origin_x), 1);
 
        size += __double_encoded_array_size(&(p[element].origin_y), 1);
 
        size += __double_encoded_array_size(&(p[element].origin_z), 1);
 
        size += __int64_t_encoded_array_size(&(p[element].length), 1);
 
        size += __int8_t_encoded_array_size(p[element].data, p[element].length);
 
    }
    return size;
}
 
int gl_overlay_message_t_encoded_size(const gl_overlay_message_t *p)
{
    return 8 + __gl_overlay_message_t_encoded_array_size(p, 1);
}
 
int __gl_overlay_message_t_decode_array(const void *buf, int offset, int maxlen, gl_overlay_message_t *p, int elements)
{
    int pos = 0, thislen, element;
 
    for (element = 0; element < elements; element++) {
 
        thislen = __string_decode_array(buf, offset + pos, maxlen - pos, &(p[element].name), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].coordinate_frame_type), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].origin_x), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].origin_y), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].origin_z), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].length), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        p[element].data = (int8_t*) lcm_malloc(sizeof(int8_t) * p[element].length);
        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, p[element].data, p[element].length);
        if (thislen < 0) return thislen; else pos += thislen;
 
    }
    return pos;
}
 
int __gl_overlay_message_t_decode_array_cleanup(gl_overlay_message_t *p, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {
 
        __string_decode_array_cleanup(&(p[element].name), 1);
 
        __int8_t_decode_array_cleanup(&(p[element].coordinate_frame_type), 1);
 
        __double_decode_array_cleanup(&(p[element].origin_x), 1);
 
        __double_decode_array_cleanup(&(p[element].origin_y), 1);
 
        __double_decode_array_cleanup(&(p[element].origin_z), 1);
 
        __int64_t_decode_array_cleanup(&(p[element].length), 1);
 
        __int8_t_decode_array_cleanup(p[element].data, p[element].length);
        if (p[element].data) free(p[element].data);
 
    }
    return 0;
}
 
int gl_overlay_message_t_decode(const void *buf, int offset, int maxlen, gl_overlay_message_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __gl_overlay_message_t_get_hash();
 
    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;
 
    thislen = __gl_overlay_message_t_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    return pos;
}
 
int gl_overlay_message_t_decode_cleanup(gl_overlay_message_t *p)
{
    return __gl_overlay_message_t_decode_array_cleanup(p, 1);
}
 
int __gl_overlay_message_t_clone_array(const gl_overlay_message_t *p, gl_overlay_message_t *q, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {
 
        __string_clone_array(&(p[element].name), &(q[element].name), 1);
 
        __int8_t_clone_array(&(p[element].coordinate_frame_type), &(q[element].coordinate_frame_type), 1);
 
        __double_clone_array(&(p[element].origin_x), &(q[element].origin_x), 1);
 
        __double_clone_array(&(p[element].origin_y), &(q[element].origin_y), 1);
 
        __double_clone_array(&(p[element].origin_z), &(q[element].origin_z), 1);
 
        __int64_t_clone_array(&(p[element].length), &(q[element].length), 1);
 
        q[element].data = (int8_t*) lcm_malloc(sizeof(int8_t) * q[element].length);
        __int8_t_clone_array(p[element].data, q[element].data, p[element].length);
 
    }
    return 0;
}
 
gl_overlay_message_t *gl_overlay_message_t_copy(const gl_overlay_message_t *p)
{
    gl_overlay_message_t *q = (gl_overlay_message_t*) malloc(sizeof(gl_overlay_message_t));
    __gl_overlay_message_t_clone_array(p, q, 1);
    return q;
}
 
void gl_overlay_message_t_destroy(gl_overlay_message_t *p)
{
    __gl_overlay_message_t_decode_array_cleanup(p, 1);
    free(p);
}
 
int gl_overlay_message_t_publish(lcm_t *lc, const char *channel, const gl_overlay_message_t *p)
{
      int max_data_size = gl_overlay_message_t_encoded_size (p);
      uint8_t *buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = gl_overlay_message_t_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = lcm_publish (lc, channel, buf, data_size);
      free (buf);
      return status;
}

struct _gl_overlay_message_t_subscription_t {
    gl_overlay_message_t_handler_t user_handler;
    void *userdata;
    lcm_subscription_t *lc_h;
};
static
void gl_overlay_message_t_handler_stub (const lcm_recv_buf_t *rbuf, 
                            const char *channel, void *userdata)
{
    int status;
    gl_overlay_message_t p;
    memset(&p, 0, sizeof(gl_overlay_message_t));
    status = gl_overlay_message_t_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding gl_overlay_message_t!!!\n", status);
        return;
    }

    gl_overlay_message_t_subscription_t *h = (gl_overlay_message_t_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    gl_overlay_message_t_decode_cleanup (&p);
}

gl_overlay_message_t_subscription_t* gl_overlay_message_t_subscribe (lcm_t *lcm, 
                    const char *channel, 
                    gl_overlay_message_t_handler_t f, void *userdata)
{
    gl_overlay_message_t_subscription_t *n = (gl_overlay_message_t_subscription_t*)
                       malloc(sizeof(gl_overlay_message_t_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->lc_h = lcm_subscribe (lcm, channel, 
                                 gl_overlay_message_t_handler_stub, n);
    if (n->lc_h == NULL) {
        fprintf (stderr,"couldn't reg gl_overlay_message_t LCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int gl_overlay_message_t_unsubscribe(lcm_t *lcm, gl_overlay_message_t_subscription_t* hid)
{
    int status = lcm_unsubscribe (lcm, hid->lc_h);
    if (0 != status) {
        fprintf(stderr, 
           "couldn't unsubscribe gl_overlay_message_t_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

