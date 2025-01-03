/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

@interface STMutableStatusBarOverridesStatusDomainData : STStatusBarOverridesStatusDomainData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing> {
    NSMutableSet * _editedIdentifiers;
    NSMutableSet * _editedKeys;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *editedIdentifiers;
@property (nonatomic, readonly, copy) NSSet *editedKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) STMutableListData *suppressedBackgroundActivityIdentifierListData;

- (void).cxx_destruct;
- (bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)editedIdentifiers;
- (id)editedKeys;
- (id)initWithCustomOverrides:(id)arg1 suppressedBackgroundActivityIdentifierListData:(id)arg2;
- (void)setEntry:(id)arg1 forKey:(id)arg2;
- (void)stopSuppressingBackgroundActivityWithIdentifier:(id)arg1;
- (void)suppressBackgroundActivityWithIdentifier:(id)arg1;
- (id)suppressedBackgroundActivityIdentifierListData;

@end
