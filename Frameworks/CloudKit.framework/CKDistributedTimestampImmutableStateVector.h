/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDistributedTimestampImmutableStateVector : NSObject <CKDistributedTimestampVector, CKDistributedTimestampVectorInternal> {
    CKDistributedTimestampAttributedVector * _backingVector;
}

@property (nonatomic, readonly) CKDistributedTimestampAttributedVector *backingVector;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__setBackingStateNoCopy:(id)arg1;
- (void)_setBackingState:(id)arg1;
- (id)allSiteIdentifiers;
- (unsigned char)atomStateForTimestamp:(id)arg1;
- (id)backingVector;
- (unsigned char)clockTypeForTimestamp:(id)arg1;
- (id)clockValuesForSiteIdentifier:(id)arg1;
- (id)clockVector;
- (long long)compareToVector:(id)arg1;
- (bool)containsTimestampsWithAtomState:(unsigned char)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithStringSiteIdentifiers:(bool)arg1 usingSuperscripts:(bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAllClockValuesUsingBlock:(id /* block */)arg1;
- (void)enumerateClockValuesForSiteIdentifier:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)hasAtomStateNotInStateVector:(id)arg1;
- (bool)hasTimestampsNotInVector:(id)arg1;
- (unsigned long long)hash;
- (bool)includesTimestamp:(id)arg1;
- (id)init;
- (id)initWithClockValuesInIndexSet:(id)arg1 withAtomState:(unsigned char)arg2 forSiteIdentifier:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGreaterThanOrEqualToVector:(id)arg1;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)timestampCount;
- (unsigned long long)timestampCountForSiteIdentifier:(id)arg1;
- (unsigned char)vectorExpansionState;
- (id)vectorFillingInImplicitClockValuesUsingSiteIdentifiers:(id)arg1;
- (id)vectorFilteredByAtomState:(unsigned char)arg1;
- (id)vectorFilteredByClockType:(unsigned char)arg1;
- (id)vectorFilteredByModifier:(id)arg1;
- (id)vectorFilteredBySiteIdentifiers:(id)arg1;

@end
