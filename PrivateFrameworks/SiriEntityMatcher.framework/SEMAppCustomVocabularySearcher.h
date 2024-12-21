/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriEntityMatcher.framework/SiriEntityMatcher
 */

@interface SEMAppCustomVocabularySearcher : NSObject {
    SEMFTSMatcher * _ftsMatcher;
}

+ (void)initialize;

- (void).cxx_destruct;
- (bool)_validateAppIds:(id)arg1 andAddToCriteria:(id)arg2;
- (bool)_validateCustomTypes:(id)arg1 andAddToCriteria:(id)arg2;
- (id)init;
- (id)initWithFtsMatcher:(id)arg1;
- (id)initWithUserId:(id)arg1;
- (id)searchAppCustomVocabularyFTS:(id)arg1 appIds:(id)arg2 types:(id)arg3;
- (id)searchAppCustomVocabularyFTSWithWildcardPatterns:(id)arg1 appIds:(id)arg2 types:(id)arg3;

@end