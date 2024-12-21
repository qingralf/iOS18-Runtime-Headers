/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMediaSuggestionRequestOptions : NSObject <MRMediaSuggestionRequestOptionsConfigurable> {
    NSArray * _bundleIdentifiers;
    NSArray * _contexts;
}

@property (nonatomic, copy) NSArray *bundleIdentifiers;
@property (nonatomic, copy) NSArray *contexts;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (id)contexts;
- (id)description;
- (id)initWithBlock:(id /* block */)arg1;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setContexts:(id)arg1;

@end