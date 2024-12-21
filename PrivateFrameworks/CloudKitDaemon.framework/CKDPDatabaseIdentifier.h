/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPDatabaseIdentifier : PBCodable <NSCopying> {
    NSString * _containerName;
    int  _containerType;
    CKDPIdentifier * _databaseOwnerId;
    int  _databaseType;
    struct { 
        unsigned int containerType : 1; 
        unsigned int databaseType : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *containerName;
@property (nonatomic) int containerType;
@property (nonatomic, retain) CKDPIdentifier *databaseOwnerId;
@property (nonatomic) int databaseType;
@property (nonatomic, readonly) bool hasContainerName;
@property (nonatomic) bool hasContainerType;
@property (nonatomic, readonly) bool hasDatabaseOwnerId;
@property (nonatomic) bool hasDatabaseType;

- (void).cxx_destruct;
- (int)StringAsContainerType:(id)arg1;
- (int)StringAsDatabaseType:(id)arg1;
- (id)containerName;
- (int)containerType;
- (id)containerTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)databaseOwnerId;
- (int)databaseType;
- (id)databaseTypeAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainerName;
- (bool)hasContainerType;
- (bool)hasDatabaseOwnerId;
- (bool)hasDatabaseType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContainerName:(id)arg1;
- (void)setContainerType:(int)arg1;
- (void)setDatabaseOwnerId:(id)arg1;
- (void)setDatabaseType:(int)arg1;
- (void)setHasContainerType:(bool)arg1;
- (void)setHasDatabaseType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end