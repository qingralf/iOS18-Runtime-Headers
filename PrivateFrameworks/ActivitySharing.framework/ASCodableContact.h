/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCodableContact : PBCodable <NSCopying> {
    NSMutableArray * _destinations;
    NSString * _fullName;
    NSString * _linkedContactStoreIdentifier;
    NSData * _pendingLegacyShareLocations;
    NSData * _pendingRelationshipShareItem;
    ASCodableRelationshipContainer * _relationshipContainer;
    ASCodableRelationshipStorage * _relationshipStorage;
    ASCodableRelationshipContainer * _remoteRelationshipContainer;
    NSString * _shortName;
}

@property (nonatomic, retain) NSMutableArray *destinations;
@property (nonatomic, retain) NSString *fullName;
@property (nonatomic, readonly) bool hasFullName;
@property (nonatomic, readonly) bool hasLinkedContactStoreIdentifier;
@property (nonatomic, readonly) bool hasPendingLegacyShareLocations;
@property (nonatomic, readonly) bool hasPendingRelationshipShareItem;
@property (nonatomic, readonly) bool hasRelationshipContainer;
@property (nonatomic, readonly) bool hasRelationshipStorage;
@property (nonatomic, readonly) bool hasRemoteRelationshipContainer;
@property (nonatomic, readonly) bool hasShortName;
@property (nonatomic, retain) NSString *linkedContactStoreIdentifier;
@property (nonatomic, retain) NSData *pendingLegacyShareLocations;
@property (nonatomic, retain) NSData *pendingRelationshipShareItem;
@property (nonatomic, retain) ASCodableRelationshipContainer *relationshipContainer;
@property (nonatomic, retain) ASCodableRelationshipStorage *relationshipStorage;
@property (nonatomic, retain) ASCodableRelationshipContainer *remoteRelationshipContainer;
@property (nonatomic, retain) NSString *shortName;

+ (Class)destinationsType;

- (void).cxx_destruct;
- (void)addDestinations:(id)arg1;
- (void)clearDestinations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinations;
- (id)destinationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationsCount;
- (id)dictionaryRepresentation;
- (id)fullName;
- (bool)hasFullName;
- (bool)hasLinkedContactStoreIdentifier;
- (bool)hasPendingLegacyShareLocations;
- (bool)hasPendingRelationshipShareItem;
- (bool)hasRelationshipContainer;
- (bool)hasRelationshipStorage;
- (bool)hasRemoteRelationshipContainer;
- (bool)hasShortName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)linkedContactStoreIdentifier;
- (void)mergeFrom:(id)arg1;
- (id)pendingLegacyShareLocations;
- (id)pendingRelationshipShareItem;
- (bool)readFrom:(id)arg1;
- (id)relationshipContainer;
- (id)relationshipStorage;
- (id)remoteRelationshipContainer;
- (void)setDestinations:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setLinkedContactStoreIdentifier:(id)arg1;
- (void)setPendingLegacyShareLocations:(id)arg1;
- (void)setPendingRelationshipShareItem:(id)arg1;
- (void)setRelationshipContainer:(id)arg1;
- (void)setRelationshipStorage:(id)arg1;
- (void)setRemoteRelationshipContainer:(id)arg1;
- (void)setShortName:(id)arg1;
- (id)shortName;
- (void)writeTo:(id)arg1;

@end
