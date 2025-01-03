/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
 */

@interface BRLTTranslator : NSObject {
    NSString * _tableIdentifier;
    <BRLTBrailleTranslationDelegateProtocol> * _translationDelegate;
}

- (void).cxx_destruct;
- (id)_backTranslate:(id)arg1;
- (id)_translate:(id)arg1 isTechnical:(bool)arg2 textFormattingRanges:(id)arg3;
- (id)arrayFromData:(id)arg1;
- (id)initWithDelegate:(id)arg1 tableIdentifier:(id)arg2;
- (bool)isEqualTable:(id)arg1;

@end
