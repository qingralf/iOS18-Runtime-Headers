/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface SDPommesSynonyms : NSObject {
    NSDictionary * dateSynonymDictionary;
    NSDictionary * firstPassSynonymDictionary;
    NSDictionary * secondPassSynonymDictionary;
}

- (void).cxx_destruct;
- (id)_cleanWord:(id)arg1 unacceptableCharSet:(id)arg2;
- (bool)_loadSynonymsFromFile:(id)arg1 isFirstPass:(bool)arg2 isDate:(bool)arg3 error:(id*)arg4;
- (id)generateDateSynonymsFromToken:(id)arg1 previousToken:(id)arg2 isOrdinalToken:(bool*)arg3;
- (id)getDateSynonymsForWord:(id)arg1;
- (id)getFirstPassSynonymsForWord:(id)arg1;
- (id)getSecondPassSynonymsForWord:(id)arg1;
- (id)init;
- (void)loadDateSynonymDictionary;
- (void)loadFirstPassSynonymDictionary;
- (void)loadSecondPassSynonymDictionary;

@end
