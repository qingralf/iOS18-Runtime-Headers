/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLibraryPersonalizationRequestOperation : MPAsyncOperation {
    NSOperationQueue * _operationQueue;
    MPStoreLibraryPersonalizationRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) MPStoreLibraryPersonalizationRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

+ (id)_personalizedArtistResponseForStoreID:(long long)arg1 modelObject:(id)arg2 groupingKey:(id)arg3 personalizationStyle:(long long)arg4 personalizationProperties:(id)arg5 libraryView:(id)arg6 libraryRequest:(id)arg7 matchingStoreIDAndName:(bool)arg8;
+ (id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2;
+ (id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2 matchAlbumArtistOnStoreIdAndName:(bool)arg3;

- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
