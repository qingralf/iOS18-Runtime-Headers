/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPaginationInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_totalPageCount : 1; 
        unsigned int has_totalResults : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_nextPageToken : 1; 
        unsigned int read_prevPageToken : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _nextPageToken;
    NSString * _prevPageToken;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _totalPageCount;
    unsigned int  _totalResults;
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