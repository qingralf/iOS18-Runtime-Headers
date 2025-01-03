/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIMeContactComparisonStrategyIdentifier : NSObject <CNMeContactComparisonStrategy> {
    NSString * _meContactIdentifierFound;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *meContactIdentifierFound;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)isMeContact:(id)arg1;
- (void)meContactChangedInStore:(id)arg1;
- (id)meContactIdentifierFound;
- (id)meContactIdentifiers;
- (void)setMeContactIdentifierFound:(id)arg1;

@end
