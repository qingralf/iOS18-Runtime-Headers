/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

@interface TPPBDisposition : PBCodable <NSCopying> {
    TPPBAncientEpoch * _ancientEpoch;
    TPPBDispositionDisallowedMachineID * _disallowedMachineID;
    TPPBDispositionDuplicateMachineID * _duplicateMachineID;
    TPPBDispositionEvictedMachineID * _evictedMachineID;
    TPPBDispositionGhostedMachineID * _ghostedMachineID;
    TPPBPolicyProhibits * _policyProhibits;
    TPPBUnknownMachineID * _unknownMachineID;
    TPPBDispositionUnknownReasonRemovalMachineID * _unknownReasonRemovalMachineID;
}

@property (nonatomic, retain) TPPBAncientEpoch *ancientEpoch;
@property (nonatomic, retain) TPPBDispositionDisallowedMachineID *disallowedMachineID;
@property (nonatomic, retain) TPPBDispositionDuplicateMachineID *duplicateMachineID;
@property (nonatomic, retain) TPPBDispositionEvictedMachineID *evictedMachineID;
@property (nonatomic, retain) TPPBDispositionGhostedMachineID *ghostedMachineID;
@property (nonatomic, readonly) bool hasAncientEpoch;
@property (nonatomic, readonly) bool hasDisallowedMachineID;
@property (nonatomic, readonly) bool hasDuplicateMachineID;
@property (nonatomic, readonly) bool hasEvictedMachineID;
@property (nonatomic, readonly) bool hasGhostedMachineID;
@property (nonatomic, readonly) bool hasPolicyProhibits;
@property (nonatomic, readonly) bool hasUnknownMachineID;
@property (nonatomic, readonly) bool hasUnknownReasonRemovalMachineID;
@property (nonatomic, retain) TPPBPolicyProhibits *policyProhibits;
@property (nonatomic, retain) TPPBUnknownMachineID *unknownMachineID;
@property (nonatomic, retain) TPPBDispositionUnknownReasonRemovalMachineID *unknownReasonRemovalMachineID;

- (void).cxx_destruct;
- (id)ancientEpoch;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disallowedMachineID;
- (id)duplicateMachineID;
- (id)evictedMachineID;
- (id)ghostedMachineID;
- (bool)hasAncientEpoch;
- (bool)hasDisallowedMachineID;
- (bool)hasDuplicateMachineID;
- (bool)hasEvictedMachineID;
- (bool)hasGhostedMachineID;
- (bool)hasPolicyProhibits;
- (bool)hasUnknownMachineID;
- (bool)hasUnknownReasonRemovalMachineID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)policyProhibits;
- (bool)readFrom:(id)arg1;
- (void)setAncientEpoch:(id)arg1;
- (void)setDisallowedMachineID:(id)arg1;
- (void)setDuplicateMachineID:(id)arg1;
- (void)setEvictedMachineID:(id)arg1;
- (void)setGhostedMachineID:(id)arg1;
- (void)setPolicyProhibits:(id)arg1;
- (void)setUnknownMachineID:(id)arg1;
- (void)setUnknownReasonRemovalMachineID:(id)arg1;
- (id)unknownMachineID;
- (id)unknownReasonRemovalMachineID;
- (void)writeTo:(id)arg1;

@end
