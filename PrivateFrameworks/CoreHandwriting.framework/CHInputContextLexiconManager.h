/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHInputContextLexiconManager : NSObject {
    NSMutableArray * _addressBook;
    id /* block */  _contactsObserverBlock;
    long long  _initialUpdateCount;
    NSSet * _lastCustomLexiconEntries;
    NSObject<OS_dispatch_queue> * _lexiconQueue;
    id /* block */  _namedEntityObserverBlock;
    NSObject<OS_dispatch_queue> * _recognitionProcessingQueue;
    _KSTextReplacementClientStore * _textReplacementStore;
    NSMutableDictionary * _textReplacements;
    struct _LXLexicon { } * _transientLexicon;
    struct _LXLexicon { } * _transientLexiconWithCustomEntries;
    struct _LXLexicon { } * _transientPhraseLexicon;
    void * _vocabulary;
}

@property (nonatomic, readonly, copy) NSArray *addressBookLexicon;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *lexiconQueue;
@property (nonatomic, readonly, copy) NSDictionary *textReplacements;
@property (nonatomic, readonly) struct _LXLexicon { }*transientLexicon;
@property (nonatomic, readonly) struct _LXLexicon { }*transientPhraseLexicon;
@property (nonatomic, readonly) void*vocabulary;

- (void).cxx_destruct;
- (id)addressBookLexicon;
- (void)dealloc;
- (id)init;
- (id)lexiconQueue;
- (id)textReplacements;
- (struct _LXLexicon { }*)transientLexicon;
- (struct _LXLexicon { }*)transientLexiconWithCustomEntries:(id)arg1;
- (struct _LXLexicon { }*)transientPhraseLexicon;
- (void*)vocabulary;

@end
