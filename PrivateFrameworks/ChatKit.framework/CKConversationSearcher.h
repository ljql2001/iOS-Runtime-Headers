/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKConversationSearcherDelegate>, CKSpotlightQuery, NSMutableArray, NSString, UISearchBar, UISearchDisplayController;

@interface CKConversationSearcher : NSObject <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate> {
    CKSpotlightQuery *_currentQuery;
    <CKConversationSearcherDelegate> *_delegate;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchController;
    NSMutableArray *_sortedSearchResults;
    bool_active;
    bool_shouldDisplayNoResults;
    bool_showingSearchResults;
}

@property(getter=isActive,readonly) bool active;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) UISearchDisplayController * searchController;
@property(getter=isShowingSearchResults,readonly) bool showingSearchResults;
@property(readonly) Class superclass;

- (void)_cancel;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (bool)isActive;
- (bool)isShowingSearchResults;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)searchBar;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (id)searchController;
- (void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;

@end