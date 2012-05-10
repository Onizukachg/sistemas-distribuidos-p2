/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "text.h"

bool_t
xdr_parametro2 (XDR *xdrs, parametro2 *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->ip, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_parametro4 (XDR *xdrs, parametro4 *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->ip, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->longitud))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->cadena, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_parametro5 (XDR *xdrs, parametro5 *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->ip, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->longitud))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->cadena, ~0))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->hash))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_parametro7 (XDR *xdrs, parametro7 *objp)
{
	register int32_t *buf;


	if (xdrs->x_op == XDR_ENCODE) {
		 if (!xdr_string (xdrs, &objp->ip, ~0))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 6 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->port))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->ping))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->swap))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->hash))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->check))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->stat))
				 return FALSE;
		} else {
			IXDR_PUT_LONG(buf, objp->port);
			IXDR_PUT_U_LONG(buf, objp->ping);
			IXDR_PUT_U_LONG(buf, objp->swap);
			IXDR_PUT_U_LONG(buf, objp->hash);
			IXDR_PUT_U_LONG(buf, objp->check);
			IXDR_PUT_U_LONG(buf, objp->stat);
		}
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		 if (!xdr_string (xdrs, &objp->ip, ~0))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 6 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->port))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->ping))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->swap))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->hash))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->check))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->stat))
				 return FALSE;
		} else {
			objp->port = IXDR_GET_LONG(buf);
			objp->ping = IXDR_GET_U_LONG(buf);
			objp->swap = IXDR_GET_U_LONG(buf);
			objp->hash = IXDR_GET_U_LONG(buf);
			objp->check = IXDR_GET_U_LONG(buf);
			objp->stat = IXDR_GET_U_LONG(buf);
		}
	 return TRUE;
	}

	 if (!xdr_string (xdrs, &objp->ip, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->ping))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->swap))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->hash))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->check))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->stat))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_retorno2 (XDR *xdrs, retorno2 *objp)
{
	register int32_t *buf;

	 if (!xdr_u_int (xdrs, &objp->letrasCambiadas))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->cadena, ~0))
		 return FALSE;
	return TRUE;
}