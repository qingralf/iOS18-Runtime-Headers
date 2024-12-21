/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPMetadataProviderSpecializationContext : NSObject {
    NSString * _MIMEType;
    unsigned long long  _allowedSpecializations;
    LPEvent * _event;
    id /* block */  _eventGenerator;
    bool  _fetchIsNotUserInitiated;
    bool  _hasLoadedResource;
    NSURL * _originalURL;
    NSURL * _postRedirectURL;
    bool  _shouldFetchSubresources;
    WKWebView * _webView;
}

@property (nonatomic, readonly, copy) NSString *MIMEType;
@property (nonatomic, readonly) unsigned long long allowedSpecializations;
@property (nonatomic, retain) LPEvent *event;
@property (nonatomic, copy) id /* block */ eventGenerator;
@property (nonatomic, readonly) bool fetchIsNotUserInitiated;
@property (nonatomic, readonly) bool hasLoadedResource;
@property (nonatomic, readonly, copy) NSURL *originalURL;
@property (nonatomic, readonly, copy) NSURL *postRedirectURL;
@property (nonatomic, readonly) bool shouldFetchSubresources;
@property (nonatomic, readonly, retain) WKWebView *webView;

- (void).cxx_destruct;
- (id)MIMEType;
- (unsigned long long)allowedSpecializations;
- (void)ensureEventWithSpecialization:(unsigned long long)arg1;
- (id)event;
- (id /* block */)eventGenerator;
- (bool)fetchIsNotUserInitiated;
- (bool)hasLoadedResource;
- (id)initWithOriginalURL:(id)arg1 postRedirectURL:(id)arg2 MIMEType:(id)arg3 webView:(id)arg4 hasLoadedResource:(bool)arg5 shouldFetchSubresources:(bool)arg6 allowedSpecializations:(unsigned long long)arg7 fetchIsNotUserInitiated:(bool)arg8;
- (id)originalURL;
- (id)postRedirectURL;
- (void)setEvent:(id)arg1;
- (void)setEventGenerator:(id /* block */)arg1;
- (bool)shouldFetchSubresources;
- (id)webView;

@end