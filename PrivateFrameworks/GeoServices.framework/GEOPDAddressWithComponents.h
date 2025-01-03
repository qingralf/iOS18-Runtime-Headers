/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAddressWithComponents : PBCodable <NSCopying> {
    NSMutableArray * _additionalComponents;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_additionalComponents : 1; 
        unsigned int read_formattedAddressComponents : 1; 
        unsigned int read_formattedAddressLines : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _formattedAddressComponents;
    NSMutableArray * _formattedAddressLines;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
