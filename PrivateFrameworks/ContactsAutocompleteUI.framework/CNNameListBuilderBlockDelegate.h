/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

@interface CNNameListBuilderBlockDelegate : NSObject <CNNameListBuilderDelegate> {
    long long  _countOfNames;
    id /* block */  _lengthValidationBlock;
    id /* block */  _nameProviderBlock;
}

@property long long countOfNames;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ lengthValidationBlock;
@property (copy) id /* block */ nameProviderBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)builder:(id)arg1 isValidLengthOfString:(id)arg2;
- (id)builder:(id)arg1 nameAtIndex:(long long)arg2;
- (long long)countOfNames;
- (long long)countOfNamesForBuilder:(id)arg1;
- (id /* block */)lengthValidationBlock;
- (id /* block */)nameProviderBlock;
- (void)setCountOfNames:(long long)arg1;
- (void)setLengthValidationBlock:(id /* block */)arg1;
- (void)setNameProviderBlock:(id /* block */)arg1;

@end
