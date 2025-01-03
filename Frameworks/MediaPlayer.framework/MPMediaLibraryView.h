/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibraryView : NSObject <NSCopying> {
    struct shared_ptr<mlcore::DeviceLibraryView> { 
        struct DeviceLibraryView {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _coreView;
    unsigned long long  _filteringOptions;
    MPMediaLibrary * _library;
}

@property (nonatomic, readonly) unsigned long long filteringOptions;
@property (nonatomic, readonly) MPMediaLibrary *library;
@property (nonatomic, readonly) struct shared_ptr<mlcore::DeviceLibraryView> { struct DeviceLibraryView {} *x1; struct __shared_weak_count {} *x2; } mlCoreView;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<mlcore::QueryResult> { struct QueryResult {} *x1; struct __shared_weak_count {} *x2; })_performCoreQuery:(struct shared_ptr<mlcore::Query> { struct Query {} *x1; struct __shared_weak_count {} *x2; })arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)filteringOptions;
- (bool)hasEntitiesForModelKind:(id)arg1;
- (id)initWithLibrary:(id)arg1 filteringOptions:(unsigned long long)arg2;
- (id)library;
- (struct shared_ptr<mlcore::DeviceLibraryView> { struct DeviceLibraryView {} *x1; struct __shared_weak_count {} *x2; })mlCoreView;
- (void)performCoreQuery:(struct shared_ptr<mlcore::Query> { struct Query {} *x1; struct __shared_weak_count {} *x2; })arg1 withCompletion:(id /* block */)arg2;
- (void)performCoreSearchQuery:(struct shared_ptr<mlcore::LocalizedSearchQuery> { struct LocalizedSearchQuery {} *x1; struct __shared_weak_count {} *x2; })arg1 withCompletion:(id /* block */)arg2;
- (struct shared_ptr<mlcore::QueryResult> { struct QueryResult {} *x1; struct __shared_weak_count {} *x2; })resultsForCoreQuery:(struct shared_ptr<mlcore::Query> { struct Query {} *x1; struct __shared_weak_count {} *x2; })arg1 error:(id*)arg2;

@end
