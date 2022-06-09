<script>
	import Nametag from './lib/Namtag.svelte'
	// import logo from './assets/svelte.png'
	// import Counter from './lib/Counter.svelte'
</script>

<main>
	<navbar />
	<Nametag />
</main>

<style lang="scss">
	@import 'node_modules/normalize.css/normalize.css';

	// :root {
		
	// }

	html, body {
		position: absolute;
		top: 0px;
		width: 100%;
		height: 100%;
		margin: 0 auto;
	}
</style>