/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFEndOfArticlePublisherDataProvider : NSObject {
    FCArticle * _article;
    NUANFEndOfArticleFeedDataProvider * _feedDataProvider;
    NUEndOfArticleSettings * _settings;
}

@property (nonatomic, readonly) FCArticle *article;
@property (nonatomic, readonly) NUANFEndOfArticleFeedDataProvider *feedDataProvider;
@property (nonatomic, readonly, copy) NUEndOfArticleSettings *settings;

- (void).cxx_destruct;
- (id)article;
- (id)feedDataProvider;
- (id)initWithArticle:(id)arg1 settings:(id)arg2 headlines:(id)arg3;
- (id)settings;

@end
