/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMFocus : NSObject <EFPubliclyDescribable> {
    NSSet * _focusedAccountIdentifiers;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, readonly, copy) NSSet *focusedAccountIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)ef_publicDescription;
- (id)focusedAccountIdentifiers;
- (id)initWithFocusedAccountIdentifiers:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFocusedIdentifier:(id)arg1;

@end
