/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDResultRefinementTime : PBCodable <NSCopying> {
    NSString * _displayName;
    struct { 
        unsigned int has_timestamp : 1; 
        unsigned int has_isSelected : 1; 
        unsigned int has_usedNextDayForFilteration : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_displayName : 1; 
        unsigned int read_metadata : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isSelected;
    GEOPDResultRefinementMetadata * _metadata;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    double  _timestamp;
    PBUnknownFields * _unknownFields;
    bool  _usedNextDayForFilteration;
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
