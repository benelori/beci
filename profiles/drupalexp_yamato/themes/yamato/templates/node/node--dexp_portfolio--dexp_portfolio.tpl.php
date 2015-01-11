<div id="node-<?php print $node->nid; ?>" class="dexp-portfolio <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="portfolio-content">
      <div class="portfolio-image">
        <?php print render($content['field_portfolio_images']); ?>
        <div class="portfolio-overlay">
          <a href="<?php print $node_url;?>" title="<?php print $title; ?>"><i class="fa fa-sign-out"></i></a>
        </div>
      </div>
      <div class="portfolio-title">
        <h5><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h5>
      </div>
      <div class="portfolio-client">
        <span><?php print t('Client:'); ?></span> <?php print strip_tags(render($content['field_portfolio_client'])); ?>
      </div>
	  <div class="portfolio-description">
		<?php print render($content['field_portfolio_categories']); ?>
	  </div>
    </div>
</div> 